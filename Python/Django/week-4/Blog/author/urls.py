from django.urls import path
from . import views

urlpatterns = [
    path("add/", views.addAuthor, name="add_author"),
]
