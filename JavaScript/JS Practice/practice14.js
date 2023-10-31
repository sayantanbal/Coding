//42. Write a JavaScript program to check whether three given numbers are increasing in strict or in soft mode.  
//Note: Strict mode -> 10, 15, 31 : Soft mode -> 24, 22, 31 or 22, 22, 31

function isStrictorSoftModeInc (num1,num2,num3){
    if (num3>num2 && num3>num1) {
        if (num2>num1) {
            console.log("Three numbers are strictly inc.");
        }
        else
        console.log("Three numbers are softly inc.");
        
    }
}



