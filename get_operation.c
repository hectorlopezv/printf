void (*get_op(char *format))(char *, va_list)
{
	int i;

	i = 0;
	switc_h possible_case[] =

	{
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}

	};

	while (i < 4)
	{
		if (strcmp(format, possible_case[i].format) == 0)
		{
			return (possible_case[i].f);

		}
		i++;
	}
	return (possible_case[i].f);
}

