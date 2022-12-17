int majorityElement(int* arr, int n){ 
    int voter = arr[0]; 
    int votercount = 1; 
    for(int i=1;i<n;i++) { 
        if(arr[i] == voter) ++votercount; 
        else 
        --votercount; 
        if(votercount == 0) { 
            voter = arr[i]; 
            votercount = 1; 
        }
    }   
    return voter; 



}
