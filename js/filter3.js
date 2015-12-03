function afterc(str) {
    if (str.indexOf("cie") > -1) {
        return true;
    }
    return false;
}

var words = ["recieve", "deveive", "percieve", "deceit", "concieve"];
var misspelled = words.filter(afterc);
print(misspelled);
