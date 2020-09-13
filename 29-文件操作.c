#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    if ((fp = fopen("./29-text.text", "w")) == NULL)
    {
        printf("\nCannot open file\nstrike any key exit\n");
        getchar();
        return 1;
    } // 文件读取完成

    fputs("邪王 真眼 最强！", fp);
    char str1[10], str2[10], str3[10];
    rewind(fp);
    fscanf(fp, "%s %s %s", str1, str2, str3);
    printf("%s %s %s\n", str1, str2, str3);
    printf("%d\n", sizeof(str1));

    fclose(fp);

    return 0;
}
