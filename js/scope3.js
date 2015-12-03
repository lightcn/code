function showScope() {
    scope = "local";
    return scope;
}

scope = "global";
print(scope);
print(showScope());
print(scope);
