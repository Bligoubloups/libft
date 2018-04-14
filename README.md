# libft

#Memory
* **bzero**: ```void ft_bzero(void *s, size_t n);```  
writes n zeroed bytes to the string s.  
* **memset**: ```void *ft_memset(void *b, int c, size_t len);```  
Writes len bytes of value c (converted to an unsigned char) to the string b.  
* **memcpy**: ```void *ft_memcpy(void *dst, const void *src, size_t n);```  
copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.
* **memrcpy**: ```void *ft_memrcpy(void *dst, const void *src, size_t n);```
* **memccpy**: ```void *ft_memccpy(void *dst, const void *src, int c, size_t n);```  
copies bytes from string src to string dst.  If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dst is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned.  
* **memmove**: ```void *ft_memmove(void *dst, const void *src, size_t len);```  
copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-destructive manner.  
* **memchr**: ```void *ft_memchr(const void *s, int c, size_t n);```  
locates the first occurrence of c (converted to an unsigned char) in string s.  
* **memcmp**: ```int ft_memcmp(const void *s1, const void *s2, size_t n);```  
compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
* **memalloc**: ```void * ft_memalloc(size_t size);```  
Alloue et retourne une zone de mémoire initialisée à 0. Si l’allocation échoue, la fonction renvoie NULL.
* **memdel**: ```void ft_memdel(void **ap);```  
Free un pointeur puis le met à NULL.

#Strings
* **strlen**: ```size_t ft_strlen(const char *s);```  
computes the length of the string s.  
* **strdup**: ```char *ft_strdup(const char *s1);```  
allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  
* **strcpy**: ```char *ft_strcpy(char *dst, const char *src);```  
copy the string src to dst (including the terminating '\0' character.).  
* **strncpy**: ```char *ft_strncpy(char *dst, const char *src, size_t len);```  
copy at most len characters from src into dst.  If src is less than len characters long, the remainder of dst is filled with '\0' characters.  Otherwise, dst is not terminated.  
* **strcat**: ```char *ft_strcat(char *s1, const char *s2);```  
functions append a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a terminating '\0'.  The string s1 must have sufficient space to hold the result.  
* **strncat**: ```char *ft_strncat(char *s1, const char *s2, size_t n);```
appends not more than n characters from s2, and then adds a terminating '\0'.  
* **strlcat**: ```size_t ft_strlcat(char *dst, const char *src, size_t size);```  
concatenate strings. Safer than strncat.  
* **strchr**: ```char *ft_strchr(const char *s, int c);```  
locates the first occurrence of c (converted to a char) in the string pointed to by s.  
* **strrchr**: ```char *ft_strrchr(const char *s, int c);```  
locates the last occurrence of c.  
* **strstr**: ```char *ft_strstr(const char *big, const char *little);```  
locates the first occurrence of the null-terminated string little in the null-terminated string big.  
* **strnstr**: ```char *ft_strnstr(const char *big, const char *little, size_t len);```  
locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.  
* **strcmp**: ```int ft_strcmp(const char *s1, const char *s2);```  
lexicographically compare the null-terminated strings s1 and s2.  
* **strncmp**: ```int ft_strncmp(const char *s1, const char *s2, size_t n);```  
compares not more than n characters.  
* **atoi**: ```int ft_atoi(const char *str);```  
converts the initial portion of the string pointed to by str to int representation.
* **strnew**: ```char * ft_strnew(size_t size);```  
Alloue et retourne une chaine de caractère terminée par ’\0’. Chaque caractère de la chaine est initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie NULL.
* **strdel**: ```void ft_strdel(char **as);```  
Free un pointeur sur char puis le met à NULL.
* **strclr**: ```void ft_strclr(char *s);```  
Assigne la valeur ’\0’ à tous les caractères de la chaine.
* **striter**: ```void ft_striter(char *s, void (*f)(char *));```  
Applique f à chaque caractère de la chaine passée en paramètre.
* **striteri**: ```void ft_striteri(char *s, void (*f)(unsigned int, char *));```  
Applique f à chaque caractère de la chaine passée en paramètre a partir de l'index i.
* **strmap**: ```char * ft_strmap(char const *s, char (*f)(char));```  
Applique f à chaque caractère de la chaine passée en paramètre et créer une nouvelle chaine.
* **strmapi**: ```char * ft_strmapi(char const *s, char (*f)(unsigned int, char));```  
Applique f à chaque caractère de la chaine passée en paramètre a partir de l'index i et créer une nouvelle chaine.
* **strequ**: ```int ft_strequ(char const *s1, char const *s2);```  
Si les deux chaines sont égales, la fonction retourne 1, 0 sinon.
* **strnequ**: ```int ft_strnequ(char const *s1, char const *s2, size_t n);```  
Si les deux chaines sont égales jusqu'a, la fonction retourne 1, 0 sinon.
* **strsub**: ```char * ft_strsub(char const *s, unsigned int start, size_t len);```  
Alloue une nouvelle chaine a partir de start jusqu'a len. Si start et len ne désignent pas un tronçon de chaine valide, le comportement est indéterminé.
* **strjoin**: ```char * ft_strjoin(char const *s1, char const *s2);```  
Alloue et retourne une chaine de caractères résultant de la concaténation de s1 et s2.
* **strtrim**: ```char * ft_strtrim(char const *s);```  
Alloue et retourne une copie de la chaine sans les espaces, '\n' et '\t' au debut et à la fin de cette chaine.
* **strsplit**: ```char ** ft_strsplit(char const *s, char c);```  
Alloue et retourne un tableau de chaines de caractères résultant de la découpe de s selon le caractère c.
* **putstr**: ```void ft_putstr(char const *s);```  
Affiche la chaine s sur la sortie standard.
* **putendl**: ```void ft_putendl(char const *s);```  
Affiche la chaine s sur la sortie standard suivi d’un ’\n’.
* **str_isalnum**: ```int ft_str_isalnum(char *str);```
* **str_isalpha**: ```int ft_str_isalpha(char *str);```
* **str_isascii**: ```int ft_str_isascii(char *str);```
* **str_isdigit**: ```int ft_str_isdigit(char *str);```
* **str_islower**: ```int ft_str_islower(char *str);```
* **str_isprint**: ```int ft_str_isprint(char *str);```
* **str_isupper**: ```int ft_str_isupper(char *str);```
* **str_tolower**: ```char *ft_str_tolower(char *str);```
* **str_toupper**: ```char *ft_str_toupper(char *str);```

#Char
* **isalpha**: ```int ft_isalpha(int c);```  
tests for any character for which isupper(3) or islower(3) is true.  
* **isdigit**: ```int ft_isdigit(int c);```  
tests for a decimal digit character.  
* **isalnum**: ```int ft_isalnum(int c);```  
tests for any character for which isalpha(3) or isdigit(3) is true.  
* **isascii**: ```int ft_isascii(int c);```  
tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.  
* **isprint**: ```int ft_isprint(int c);```  
tests for any printing character, including space (' ').  
* **isblank**: ```int ft_isblank(int c);```
* **islower**: ```int ft_islower(int c);```
* **isspace**: ```int ft_isspace(int c);```
* **isupper**: ```int ft_isupper(int c);```
* **toupper**: ```int ft_toupper(int c);```  
converts a lower-case letter to the corresponding upper-case letter.  
* **tolower**: ```int ft_tolower(int c);```  
converts an upper-case letter to the corresponding lower-case letter.  
* **putchar**: ```void ft_putchar(char c);```  
Affiche le caractère c sur la sortie standard.

#Int
* **putnbr**: ```void ft_putnbr(int n);```  
Affiche l’entier n sur la sortie standard.
* **itoa**: ```char * ft_itoa(int n);```  
Alloue et retourne une chaine de caractères représentant l’entier n.

#Base
* **iota_base**: ```char *ft_itoa_base(int nb, char *base);```
* **atoi_base**: ```int ft_atoi_base(char *nb, char *base);```

#Fd
* **putchar_fd**: ```void ft_putchar_fd(char c, int fd);```  
Ecrit le caractère c sur le descripteur de fichier fd.
* **putstr_fd**: ```void ft_putstr_fd(char const *s, int fd);```  
Ecrit la chaine s sur le descripteur de fichier fd.
* **putendl_fd**: ```void ft_putendl_fd(char const *s, int fd);```  
Ecrit la chaine s sur le descripteur de fichier fd suivi d’un
’\n’.
* **putnbr_fd**: ```void ft_putnbr_fd(int n, int fd);```  
Ecrit l’entier n sur le descripteur de fichier fd.

#List
```
typedef struct  s_list
{
  void          *content;
  size_t        content_size;
  struct s_list *next;
}               t_list;
```
* **lstnew**: ```t_list *ft_lstnew(void const *content, size_t content_size);```  
Alloue et retourne un maillon.
* **lstdelone**: ```void ft_lstdelone(t_list **alst, void (*del)(void *, size_t));```  
Supprime un maillon, sans faire le relink.
* **lstdel**: ```void ft_lstdel(t_list **alst, void (*del)(void *, size_t));```  
Supprime un maillon, et tout les suivants.
* **lstadd**: ```void ft_lstadd(t_list **alst, t_list *new);```  
Ajoute l'élément new en tête de liste.
* **lstiter**: ```void ft_lstiter(t_list *lst, void (*f)(t_list *elem));```  
Parcourt lst en appliquant à chaque maillon la fonction f.
* **lstmap**: ```t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));```  
Parcourt la liste lst en appliquant à chaque maillon la fonction
f et retourne une nouvelle liste.
* **lstaddback**: ```void ft_lstaddback(t_list **alst, t_list *new);```
* **lstsize**: ```int ft_lstsize(t_list *begin_list);```
* **lstrev**: ```void ft_lstrev(t_list **begin_list);```
* **lstsort**: ```void ft_lstsort(t_list **begin_list, int (*cmp)());```
* **lstmerge**: ```void ft_lstmerge(t_list **begin_list1, t_list *begin_list2);```
* **lstdelif**: ```void ft_lstdelif(t_list **begin_list, void *data_ref, int (*cmp)());```
* **lstiterif**: ```void ft_lstiterif(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)());```
* **lstlast**: ```t_list *ft_lstlast(t_list *begin_list);```
* **lstfind**: ```t_list *ft_lstfind(t_list *begin_list, void *data_ref, int (*cmp)());```
* **lstat**: ```t_list *ft_lstat(t_list *begin_list, unsigned int nbr);```
