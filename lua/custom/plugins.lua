local plugins = {
    {
        "williamaboman/mason.nvim",
        opts = {
            ensure_installed = {
                "pyright",
            },
        },
    },
}
return plugins 
