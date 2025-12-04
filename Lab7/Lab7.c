#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    //BAI 1 XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI
    char s[200];
    int na = 0, pa = 0, i;
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    for (i = 0; s[i]; i++) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z')
            (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') ? na++ : pa++;
    }
    printf("Nguyen am: %d\nPhu am: %d\n", na, pa);

    //BAI 2 XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD
    char user[20], pass[20];
    printf("\nNhap username: ");
    scanf("%s", user);
    printf("Nhap password: ");
    scanf("%s", pass);
    if (strcmp(user, "admin") == 0 && strcmp(pass, "123456") == 0)
        printf("Dang nhap thanh cong!\n");
    else
        printf("Dang nhap that bai!\n");
    return 0;
}