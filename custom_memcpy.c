VOID* 
memcpy(
	IN VOID*  Destination, 
	IN VOID*  Source, 
	IN SIZE_T nSize
)
{
	/* cast it VOID->CHAR */
	CHAR* src = ( CHAR* )Source;
	CHAR* dst = ( CHAR* )Destination;
	for ( INT i = 0; i < nSize; i++ ) /* iterate over size */
	{
		dst[ i ] = src[ i ];
	}
	return dst; /* return the dest var */
}