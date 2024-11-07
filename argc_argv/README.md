# C - argc, argv

## 0. It ain't what they call you, it's what you answer to
```
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
```
`__attribute__((unused)):` Tells the compiler not to issue a warning about unused argc.

```
Command: ./my_program

Memory layout:
-------------------------
argv[0] -> "./my_program" (program name/path)
-------------------------

`argv` Array:
+-----------+-----------+
| argv[0]   | argv[1]   |
+-----------+-----------+
| "./my_program" | NULL |
+-----------+-----------+

`*argv` points to `argv[0]`, which is "./my_program"

```

## 1. Silence is argument carried out by other means



## 2. 2. The best argument against democracy is a five-minute conversation with the average voter




## 3. Neither irony nor sarcasm is argument




## 4. To infinity and beyond



