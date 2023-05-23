@@ -11,11 +11,13 @@
void print_alphabet(void)
{

int x;
int lower_x;
for (x = 'A'; x <= 'Z'; x++)
{
lower_x = tolower(x);
_putchar(lower_x);
	int x;
	int lower_x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		lower_x = tolower(x);
		_putchar(lower_x);
	}
	_putchar('\n');
}
_putchar('\n'); }
