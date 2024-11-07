# C - Recursion

## 0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

```
void _puts_recursion(char *s)
{
    // Check if the current character is the null-terminator
    if (*s == '\0')  
    {
        _putchar('\n');  // Print newline after the string is finished
        return;          // End recursion when the string ends
    }

    _putchar(*s);        // Print the current character
    _puts_recursion(s + 1); // Recur with the next character (move pointer forward)
}

```

`if (*s == '\0') {}`\
// Check if the current character is the null-terminator\
Remeber that this is checking the pointer.

`_puts_recursion(s + 1);`\
// Recur with the next character (move pointer forward)

```
Call 1: _puts_recursion("Hello")
   |
   +-> Prints 'H'
   +-> Calls _puts_recursion("ello")

Call 2: _puts_recursion("ello")
   |
   +-> Prints 'e'
   +-> Calls _puts_recursion("llo")

Call 3: _puts_recursion("llo")
   |
   +-> Prints 'l'
   +-> Calls _puts_recursion("lo")

Call 4: _puts_recursion("lo")
   |
   +-> Prints 'l'
   +-> Calls _puts_recursion("o")

Call 5: _puts_recursion("o")
   |
   +-> Prints 'o'
   +-> Calls _puts_recursion("")

Call 6: _puts_recursion("")
   |
   +-> Reaches base case: Prints '\n'
   +-> Returns (no more recursion)


```

## 1. Why is it so important to dream? Because, in my dreams we are together




## 2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange




## 3. You mustn't be afraid to dream a little bigger, darling




## 4. Once an idea has taken hold of the brain it's almost impossible to eradicate





## 5. Your subconscious is looking for the dreamer




## 6. Inception. Is it possible?





