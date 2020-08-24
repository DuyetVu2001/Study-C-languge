#include <stdio.h>
#include <string.h>
 
int WordCount(char str[], int length)
{
    int word = (str[0] != ' ');
    int i;
    for (i = 0; i < length - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            word++;
        }
    }
    return word;
}
 
void Correct(char str[], int length)
{
	int i;
    int first = 0, last = length - 1;
    // Xóa dau trang dau chuoi
    while (first < last && str[first] == ' ')
        first++;
    // Xóa dau trang cuoi chuoi
    while (last > first && str[last] == ' ')
        last--;
 
    // Viet hoa chu cái dau tiên
    if (str[first] >= 'a' && str[first] <= 'z')
        str[first] -= 32;
    for ( i = first; i <= last; i++)
    {
        // Ðua het ve chu thuong
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
        if (i + 1 <= last)
        {
            // Bo dau trang thua o giua
            if (str[i] == str[i + 1] && str[i] == ' ')
            {
                continue;
            }
            // Neu là chu cái dau moi tu thì viet hoa
            if (str[i] == ' ' && str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] -= 32;
            }
        }
        printf("%c", str[i]);
    }
}
 
int main()
{
    char str[100];
    // Nhap chuoi
    printf("\nNhap chuoi: ");
    fgets(str, sizeof str, stdin);
    // Do su dung fgets nên chuoi cua chúng ta se doc ca ký tu '\n'.
    // Xóa bo nó di.
    int length = strlen(str) - 1; 
    str[length] = '\0';
    printf("So tu cua \"%s\" la %d", str, WordCount(str, length));
    printf("\nXau chuan hoa la: ");
    Correct(str, length);
}
