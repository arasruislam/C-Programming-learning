""" 
# key value pair
# dictionary
# object
# hash table
# overlap with set
"""
# {key:value, key:value, key:value}
person = {'name': 'Asru Islam', 'address': 'Uttara', 'age': 22, 'job': 'Off page seo expert'}

# print(person)
# print(person['address'])
# print(person.keys())
# print(person.values())
person['Language'] = 'python'
# print(person)


# convert dictionary to list
makeList = list(person)
# print(makeList)

# for item in person:
#     print(item)
    
# special dictionary looping
for key,value in person.items():
    print(key,'=>',value)

