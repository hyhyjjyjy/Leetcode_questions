int strStr(char * haystack, char * needle){
    if (strlen(needle) == 0)
        return 0; 
    int n = strlen(needle);
    for (int i = 0; i < strlen(haystack); i++) {
        if (*(haystack + i) == *(needle)) {
            int l = 0;
            for (l = 1; l < n ; l++) {
                if (*(haystack + i + l) != *(needle + l))
                    break;
            }
            if (l == n)
                return i;
        }
    }
    return -1;
}