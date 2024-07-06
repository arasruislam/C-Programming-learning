from django.shortcuts import render, redirect
from django.contrib.auth import authenticate, login, logout
from django.contrib.auth.forms import AuthenticationForm
from django.contrib import messages
from . import forms


# Create your views here.
def register(request):
    if request.method == "POST":
        register_form = forms.RegistrationForm(request.POST)
        if register_form.is_valid():
            register_form.save()
            messages.success(request, "Account Created Successfully")
            return redirect("register")
    else:
        register_form = forms.RegistrationForm()

    return render(request, "register.html", {"form": register_form, "type": "Register"})


def user_login(request):
    if request.method == "POST":
        form = AuthenticationForm(request, request.POST)

        if form.is_valid():
            user_name = form.cleaned_data["username"]
            user_pass = form.cleaned_data["password"]

            user = authenticate(username=user_name, password=user_pass)

            if user is not None:
                login(request, user)
                messages.success(request, "Logged in Successfully")
                return redirect("home")
            else:
                messages.warning(request, "Login informtion incorrect")
                return redirect("register")
    else:
        form = AuthenticationForm()
    return render(request, "register.html", {"form": form, "type": "Login"})


def user_logout(request):
    logout(request)
    return redirect('user_login')