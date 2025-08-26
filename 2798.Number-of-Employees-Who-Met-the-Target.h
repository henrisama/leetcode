int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target){
    int i, ans = 0;

    for(i=0;i<hoursSize;i++){
        if(hours[i] >= target){
            ans += 1;
        }
    }

    return ans;
}