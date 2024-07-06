from django.urls import path
from . import views

urlpatterns = [
    path("register/", views.register, name="register"),
    path("user_login/", views.user_login, name="user_login"),
    path("profile/", views.profile, name="profile"),
    path("pass_change/", views.pass_change, name="pass_change"),
    path("logout/", views.user_logout, name="logout"),
]
