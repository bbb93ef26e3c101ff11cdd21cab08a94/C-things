VOID* 
strlen(
	IN CHAR* str
)
{
	INT len = 0; /* initialize the len variable to zero */
	while ( str[ len ] ) /* gets string length */
	{
		len++; /* increase the length */
	}
	return len; /* return the length */
}