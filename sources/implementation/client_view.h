int client_view_fun(int b)
{
	if b
	{
		printf("%s : %d\n", "client_view_fun_if",b);
	}
	else
	{
		printf("%s : %d\n", "client_view_fun_else",b);
	}
}
void client_view_proc(int b)
{
	if b
	{
		printf("%s : %d\n", "client_view_proc_if",b);
		return b;
	}
	printf("%s : %d\n", "client_view_proc_else",b);
	return b;
}