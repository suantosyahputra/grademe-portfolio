char	*gm_strcpy(char *dst, const char *src)
{
	//(void)src;
	//return (dst);

	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst);
}
