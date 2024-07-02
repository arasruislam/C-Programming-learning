from django.db import models
from categories.models import Category
from author.models import Author


# Create your models here.
class Post(models.Model):
    name = models.CharField(max_length=50)
    content = models.TextField()

    # relation with category => many to many relation
    category = models.ManyToManyField(Category)

    # relation with author => one to many | many to one
    author = models.ForeignKey(Author, on_delete=models.CASCADE)
