t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *head;

	head = (t_list *)ft_memalloc(sizeof(t_list));
	if (head == 0)
		return (0);
	if (content == 0)
	{
		head -> content = 0;
		head -> content_size = 0;
		return (head);
	}
	head -> content = ft_memalloc(content_size);
	if (head -> content == 0)
	{
		ft_memdel((void **)&head);
		return (0);
	}
	ft_memcpy(head -> content, content, content_size);
	head -> content_size = content_size;
	head -> next = 0;
	return (head);
}
