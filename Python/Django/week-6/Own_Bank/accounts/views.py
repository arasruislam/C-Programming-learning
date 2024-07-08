from django.views.generic.edit import FormView
from .forms import UserRegistrationForm
from django.contrib.auth import login
from django.shortcuts import render


# Create your views here.
class UserRegistrationView(FormView):
    template_name = ""
    form_class = UserRegistrationForm
    success_url = ""

    def form_valid(self, form):
        user = form.save()
        login(user)
        return super().form_valid(
            form
        )  # function call by itself if everything is okay.
