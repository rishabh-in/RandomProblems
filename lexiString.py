a = "polikujmnhytgbvfredcxwqaz"
b = "abcd"
index = []
for i in b:
    ind = a.index(i)
    index.append(ind)

index = sorted(index)
for i in index:
    print(a[i], end="")
print()