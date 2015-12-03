function studentGrade() {
    this.gradeStore = [];
    this.add = add;
    this.average = average;
}

function add(temp) {
    this.gradeStore.push(temp);
}

function average() {
    var total = 0;
    for (var i = 0; i < this.gradeStore.length; ++i) {
        total += this.gradeStore[i];
    }
    return total / this.gradeStore.length;
}

var gradeInstance = new studentGrade();
gradeInstance.add(98);
gradeInstance.add(97);
gradeInstance.add(96);
print(gradeInstance.average());
