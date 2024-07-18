/*
FUNCTION
	<<strlcat>>

DESCRIPTION
	The <<strlcat>> function appends the NUL-terminated string src to the end
	of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
	nating the result.

RETURNS
	The initial length of dst plus the length of src
*/
int	length_char(char *word)
{
	int	i;

	i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_length;
	unsigned int	s_length;
	unsigned int	c;

	d_length = length_char(dest);
	s_length = length_char(src);
	c = 0;
	if (d_length >= size)
	{
		return (size + s_length);
	}
	while (src[c] != '\0' && c < (size - d_length - 1))
	{
		dest[d_length + c] = src[c];
		c++;
	}
	dest[d_length + c] = '\0';
	return (d_length + s_length);
}

