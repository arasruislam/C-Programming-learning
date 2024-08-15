from django.shortcuts import render
from .forms import RegistrationForm


# Create your views here.
def home(request):
    if request.method == "POST":
        form = RegistrationForm(request.POST)
        if form.is_valid():
            form.save(False)
    else:
        form = RegistrationForm()
    return render(request, "./home.html", {"form": form})
