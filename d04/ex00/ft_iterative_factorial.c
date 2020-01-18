int ft_iterative_factorial(int nb)
{
    int f;

    if (nb < 0 || nb > 12)
        return (0);

    if (nb == 1)
        return (1);

    else if (nb <=1)
        return (1);

    f = 1;
    
        while (nb > 1)
        {
            f *= nb;
            nb--;
        }
        return (f);
}