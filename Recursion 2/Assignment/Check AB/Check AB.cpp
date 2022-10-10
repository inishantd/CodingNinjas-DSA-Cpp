bool checkAB(char input[]) {
	// Write your code here
    if(input[0] == '\0'){
        return true;
    }
    if(input[0] != 'a'){
        return false;
    }
    if(input[1] == '\0'){
        return true;
    }
    if(input[1] == 'a'){
        return checkAB(input + 1);
    }
    if(input[1] == 'b' && input[2] == 'b' && input[3] != 'b'){
			return checkAB(input + 3);
    }
    return false;
    
}





