from django.shortcuts import render
from .forms import RegistrationForm
from django.contrib import messages


# Create your views here.
def home(request):
    if request.method == "POST":
        form = RegistrationForm(request.POST)
        if form.is_valid():
            messages.success(request, 'User created successfully')
            form.save()
    else:
        form = RegistrationForm()
    return render(request, "home.html", {"form": form})
