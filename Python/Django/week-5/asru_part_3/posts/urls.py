from django.urls import path
from . import views

urlpatterns = [
    # path("add/", views.addPost, name="add_post"),
    path("add/", views.addPostCreateView.as_view(), name="add_post"),
    # path("edit/<int:id>", views.editPost, name="edit_post"),
    path("edit/<int:id>", views.editPostUpdateView.as_view(), name="edit_post"),
    # path("delete/<int:id>", views.deletePost, name="delete_post"),
    path("delete/<int:id>", views.deletePostDeleteView.as_view(), name="delete_post"),
]
