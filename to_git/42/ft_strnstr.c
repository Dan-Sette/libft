#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len > 0)
	{
		if (big[i] == little[j])
		{
			j = 0;
			while (big[i + j] == little[j] && len > 0)
			{
				j++;
				if (little[j] == '\0')
					return ((char *)&big[i]);
				len--;
			}
		}
		len--;
		i++;
	}
	return (NULL);
}
