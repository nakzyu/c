## Pointer

### Declararing Pointer

```c
int* p = 1;
```

p = address<br/>

\*p = value in it

```c
char hello[] = "hello";

char *p = hello;

while (*p)
{
    *p += 1; // increase the character by one

    p += 1; // move to the next spot
}

printf(hello);
```

result:
<code>ifmmp</code>
