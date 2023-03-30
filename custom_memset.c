VOID* 
memSet(
	IN  VOID*  ptr, 
	IN  CHAR   Value, 
	IN  SIZE_T nSize
)
{
	UCHAR* _ptr = ( UCHAR* )ptr; /* cast it (convert it from VOID to UCHAR) */
	for ( INT i = 0; i < nSize; i++ ) /* iterate over size */
	{
		_ptr[ i ] = ( UCHAR )Value; /* sets _ptr to a value specified by user */
	}
	return _ptr; /* return ptr*/
}
