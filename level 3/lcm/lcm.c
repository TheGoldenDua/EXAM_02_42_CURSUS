unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int i;

    if (!a || !b)
        return 0;

    for (i = (a > b ? a : b); ; i++) {
        if (i % a == 0 && i % b == 0)
            return i;
    }
}


// unsigned int lcm(unsigned int a, unsigned int b) {
//     unsigned int i;

//     if (!a || !b)
//         return 0;

//     if (a > b)
//         i = a;
//     else
//         i = b;

//     while (1) {
//         if (i % a == 0 && i % b == 0)
//             return i;
//         i++;
//     }
// }

