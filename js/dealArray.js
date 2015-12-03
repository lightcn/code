var words = ["I ", "love ", " this", " world!"];
function inOrder(words) {
    for (var i = 0; i < words.length; ++i) {
        print(words[i]);
    }
}

function reOrder(words) {
    for (var i = words.length - 1; i >= 0; i--) {
        print(words[i]);
    }
}

inOrder(words);
reOrder(words);
