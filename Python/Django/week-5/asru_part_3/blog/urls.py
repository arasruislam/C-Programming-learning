from django.contrib import admin
from django.conf import settings
from django.conf.urls.static import static
from django.urls import path, include
from . import views

urlpatterns = [
    path("admin/", admin.site.urls),
    path("", views.home, name="home"),
    path("author/", include("author.urls")),
    path("post/", include("posts.urls")),
    path("category/", include("categories.urls")),
    path("category/<slug:category_slug>/", views.home, name="category_wise_post"),
]

urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)
