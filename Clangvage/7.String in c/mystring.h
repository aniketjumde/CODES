int mystrlen(char str[])
{
    int cnt;
    cnt=0;
    for(int i=0;str[i]!='\0';i++)
    {
        cnt++;
    }

    return cnt;
}
