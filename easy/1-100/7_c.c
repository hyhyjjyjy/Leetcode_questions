int reverse(int x){
    int y = x;
    int nums[11];
    const int max = pow(2, 31) - 1;
    const int min = -pow(2, 31);
    int i = 0;
    while (y / 10 != 0) {
        nums[i] = y % 10;
        y = y / 10;
        i++;
    }
    nums[i] = y % 10;
    int length = i;
    y = 0;
    while ( i >= 0) {
        if (((x > 0) && (max / pow(10, i) < nums[length - i]
        || max - nums[length - i] * pow(10, i) < y)) || 
        ((x < 0) && (min / pow(10, i) > nums[length - i]
        || min - nums[length - i] * pow(10, i) > y))){
            return 0;
        }

        y += nums[length - i] * pow(10, i);
        i--;
    }
    return y;
}