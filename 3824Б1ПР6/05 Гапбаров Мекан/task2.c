// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  int a, b;
  scanf_s("%d", &a);
  scanf_s("%d", &b);
  int res = a * b;
  printf("%d\n, UINT_MAX", res);
  return 0;
}
