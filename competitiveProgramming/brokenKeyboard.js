
var testArray = ["a", "zzaaz", "ccff", "cbddbb","aabaa"]

function sortString(givenString){
    return givenString.split('').sort().join('');
}

function brokenKeyboard(numTestCases,arrayToTest){

    var cont = 0

    while(cont < numTestCases){

        var correctKey = ""
        var currentString = testArray[cont]
        var isIncluded = {}

        //solution starts here
        for(var i = 0; i < currentString.length; i++){

            var firstChar = currentString[i]
            var secondChar = currentString[i + 1]

            if(firstChar == secondChar){
                i++;
            }else{
                if(firstChar in isIncluded){
                }else{
                    correctKey += firstChar
                    isIncluded[firstChar] = 1
                }
            }

        }
        //ends here
        //sort the string in alphabetical order
        correctKey = sortString(correctKey)
        console.log(correctKey)
        cont++;

    }
}

brokenKeyboard(5,testArray)






