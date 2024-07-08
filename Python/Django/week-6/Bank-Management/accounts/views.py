from django.contrib.auth.views import LoginView, LogoutView
from django.views.generic.edit import FormView
from django.contrib.auth import login, logout
from .forms import UserRegistrationForm, UserUpdateForm
from django.urls import reverse_lazy
from django.shortcuts import render, redirect
from django.views import View


# Registration view
class UserRegistrationView(FormView):
    template_name = "accounts/user_registration.html"
    form_class = UserRegistrationForm
    success_url = reverse_lazy("register")

    def form_valid(self, form):
        print(form.cleaned_data)
        user = form.save()
        login(self.request, user)
        print(user)
        return super().form_valid(
            form
        )  # function call by itself if everything is okay.


# Login View
class UserLoginView(LoginView):
    template_name = "accounts/user_login.html"

    def get_success_url(self) -> str:
        return reverse_lazy("home")


# Logout View
# class UserLogoutView(LogoutView):
#     def get_success_url(self):
#         if self.request.user.is_authenticated:
#             logout(self.request)
#         return reverse_lazy("home")


def UserLogoutView(request):
    logout(request)
    return redirect("home")


# User Profile Update View
class UserBankAccountUpdateView(View):
    template_name = "accounts/profile.html"

    def get(self, request):
        form = UserUpdateForm(instance=request.user)
        return render(request, self.template_name, {"form": form})

    def post(self, request):
        form = UserUpdateForm(request.POST, instance=request.user)
        if form.is_valid():
            form.save()
            return redirect("profile")  # Redirect to the user's profile page
        return render(request, self.template_name, {"form": form})
