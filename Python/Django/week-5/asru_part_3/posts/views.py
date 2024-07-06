from django.shortcuts import render, redirect
from . import forms
from . import models
from django.contrib.auth.decorators import login_required

# Class based view impost
from django.views.generic import CreateView, UpdateView, DeleteView
from django.urls import reverse_lazy
from django.utils.decorators import method_decorator


# Create your views here.
# def addPost(request):
#     if request.method == "POST":
#         post_form = forms.PostForm(request.POST)
#         if post_form.is_valid():
#             post_form.instance.author = request.user
#             post_form.save()
#             return redirect("add_post")
#     else:
#         post_form = forms.PostForm()

#     return render(request, "add_post.html", {"form": post_form})


# Add post using Class based view
@method_decorator(login_required, name="dispatch")
class addPostCreateView(CreateView):
    model = models.Post
    form_class = forms.PostForm
    template_name = "add_post.html"
    success_url = reverse_lazy("add_post")

    def form_valid(self, form):
        form.instance.author = self.request.user
        return super().form_valid(form)


# ..............................................
# @login_required
# def editPost(request, id):
#     post = models.Post.objects.get(pk=id)
#     print(post)
#     post_form = forms.PostForm(instance=post)
#     if request.method == "POST":
#         post_form = forms.PostForm(request.POST, instance=post)
#         if post_form.is_valid():
#             post_form.instance.author = request.user
#             post_form.save()
#             return redirect("home")

#     return render(request, "add_post.html", {"form": post_form})


# Convert edit post into class based view
@method_decorator(login_required, name="dispatch")
class editPostUpdateView(UpdateView):
    model = models.Post
    form_class = forms.PostForm
    template_name = "add_post.html"
    pk_url_kwarg = "id"
    success_url = reverse_lazy("home")


# delete post using function
# @login_required
# def deletePost(request, id):
#     post = models.Post.objects.get(pk=id)
#     post.delete()
#     return redirect("home")


# Convert edit post into class based view
@method_decorator(login_required, name="dispatch")
class deletePostDeleteView(DeleteView):
    model = models.Post
    template_name = "delete.html"
    pk_url_kwarg = "id"
    success_url = reverse_lazy("home")
