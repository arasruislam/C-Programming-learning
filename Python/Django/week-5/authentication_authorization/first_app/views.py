from django.shortcuts import render
from .forms import RegistrationForm
from django.contrib import messages


# Create your views here.
def home(request):
    return render(request, "home.html")


def signup(request):
    if request.method == "POST":
        form = RegistrationForm(request.POST)
        if form.is_valid():
            messages.success(request, "User created successfully")
            form.save()
    else:
        form = RegistrationForm()
    return render(request, "signup.html", {"form": form})
