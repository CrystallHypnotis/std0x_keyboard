def parser(st, output):
    for i in range(len(st)):
        if type(st[i]) == str:
            if type(st[i-1]) == dict:
                output.append({"matrix": [float(_) for _ in st[i].split(",")], "x": st[i-1].get("x", 0), "y": st[i-1].get("y", 0) })
            else:
                t = i
                while type(st[t]) != dict:
                    t -= 1
                print(st[t])
                output.append({"matrix": [float(_) for _ in st[i].split(",")], "x": st[t].get("x", 0), "y": st[t].get("y", 0) })


data = open("data", "r")
formed = data.read().replace('x', '"x"').replace('y', '"y"').replace('r', '"r"').replace('w', '"w"').replace('h', '"h"').replace('""', '')
data.close()
data = open("data", "w")
data.write(formed)
data.close()

data = [eval(strng) for strng in open("data", encoding="UTF-8").read().split(",\n")]
output = []
out = open("out", "w")

for i in data:
    parser(i, output)

for i in output:
    print(i)
    
out.close()
