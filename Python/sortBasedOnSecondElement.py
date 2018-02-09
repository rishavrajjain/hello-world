a=[['f','3'],['m','4'],['g','1']]
print(sorted(a,key=lambda x: x[1]))


unsorted_list = [['a','b','c','5','d'],['e','f','g','3','h'],['i','j','k','4','m']]
print(sorted(unsorted_list, key = lambda x: int(x[3])))
#[['e', 'f', 'g', '3', 'h'], ['i', 'j', 'k', '4', 'm'], ['a', 'b', 'c', '5', 'd']

