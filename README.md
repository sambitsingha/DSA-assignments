# EXERCISE

## Chapter 1 - Let Us C

### Pg No - 40 Qs. F

Predict the output of the following programs

```c
// Qs - 1
#include <stdio.h>
int main()
{
    int i = 2, j = 3, k, l;
    float a, b;
    k = i / j * j;
    l = j / i * i;
    a = i / j * j;
    b = j / i * i;
    printf("%d\n%d\n%f\n%f", k, l, a, b);
    return 0;
}
```

> Expected Output -

```
0
2
0.0
2.0
```

<br>
<br>

```c
// Qs - 2
#include <stdio.h>
int main()
{
    int a,b;
    a = -3 - - 3;
    b = -3 - - (-3);
    printf("a = %d and b = %d",a,b);
    return 0;
}
```

> Expected Output -

```
0
-6
```
