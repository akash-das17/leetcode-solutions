char repeatedCharacter(char* s) {
    // int arr[26]; 
    int *arr=(int *)calloc(26, sizeof(int));
    while(*s != '\0')
    {
        int i = *s - 'a';
        arr[i]++;
        if(arr[i]==2)
            return *s;
        s++;
    }
    return '\0';
}