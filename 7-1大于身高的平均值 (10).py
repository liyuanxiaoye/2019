list1 = []#建立空列表
str1 = input()
list2 =str1.split(" ")#读入后分裂给list2
i=0
len_list2=len(list2)
while i < len_list2 :
    list1.append(int(list2[i]))
    i += 1
s=sum(list1)
ave=s/len_list2

for i in range(0,len_list2,1):
    if list1[i]>ave:
        print(list1[i],end=" ")
