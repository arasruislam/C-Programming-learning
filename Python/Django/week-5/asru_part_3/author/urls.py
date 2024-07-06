from django.urls import path
from . import views
from django.contrib.auth.views import LogoutView

urlpatterns = [
    path("register/", views.register, name="register"),
    # path("user_login/", views.user_login, name="user_login"),
    path("user_login/", views.userLoginView.as_view(), name="user_login"),
    path("profile/", views.profile, name="profile"),
    path("profile/edit/", views.edit_profile, name="edit_profile"),
    path("profile/edit/pass_change/", views.pass_change, name="pass_change"),
    path("logout/", views.user_logout, name="logout"),
    # path("logout/", views.LogoutView.as_view(), name="logout"),
]
