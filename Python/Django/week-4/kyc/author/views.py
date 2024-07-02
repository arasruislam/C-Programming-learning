from django.shortcuts import render


# Create your views here.
def addAuthor(request):
    return render(request, "add_author.html")
