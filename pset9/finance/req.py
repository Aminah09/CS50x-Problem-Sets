import requests

# Search GitHub's repositories for requests
response = requests.get(
    'https://ide-1d5b081cd83b44c08ddc876a6c36b085-8080.cs50.ws/buy',
    params={
        'symbol': {'name':'Apple Inc', 'price': 300, 'symbol':'AAjjPL'},
        'shares':"gf"
    }
)


print("header", response)