from django.urls import path, include
from . import views

urlpatterns = [
    path("", views.home, name="homePage"),
    path("about/", views.about, name="aboutPage"),
    path("form/", views.submit_form, name="submit_form"),
    path("django_form/", views.djangoForm, name="django_form"),
]
